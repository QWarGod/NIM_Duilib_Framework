// 处理XML配置文件配置CefControl隐藏会导致崩溃问题
class CefControlPlus : public nim_comp::CefControl
{
protect:
	void SetVisible(bool bVisible = true) {
		__super::SetVisible(bVisible);
		if (!bVisible)
		{
			// 设置隐藏的时候，如果高度或者宽度为零，则修改下，让其不要崩溃（其实任意情况下都不能为零）
			if (browser_handler_.get())
			{
				// BrowserHandler::GetViewRect(CefRefPtr<CefBrowser> browser, CefRect& rect) 没有使用browser对象
				CefRect rect;
				browser_handler_->GetViewRect(NULL, rect);
				if (rect.width == 0)
				{
					rect.width = 1;
				}
				if (rect.height == 0)
				{
					rect.height = 1;
				}
				RECT rcSet;
				rcSet.left = rect.x;
				rcSet.top = rect.y;
				rcSet.right = rect.x + rect.width;
				rcSet.bottom = rect.y + rect.height;
				browser_handler_->SetViewRect(rcSet);
			}
		}
		
	}
};
#include "stdafx.h"
#include "item.h"


Item::Item()
:control_img_(nullptr)
{
}


Item::~Item()
{
}

void Item::InitSubControls(const std::wstring& img, const std::wstring& title)
{
	// ���� Item �µĿؼ�
	if (control_img_ == nullptr)
	{
		control_img_ = dynamic_cast<ui::Control*>(FindSubControl(L"control_img"));
		label_title_ = dynamic_cast<ui::Label*>(FindSubControl(L"label_title"));
		progress_ = dynamic_cast<ui::Progress*>(FindSubControl(L"progress"));
		btn_del_ = dynamic_cast<ui::Button*>(FindSubControl(L"btn_del"));
		// ģ�����������
		auto timestamp = shared::tools::GenerateTimeStamp();
		int64_t timestamp_num = 0;	
		nbase::StringToInt64(timestamp, &timestamp_num);
		t_time = timestamp_num;
		progress_->SetValue((double)(timestamp_num % 100));
		// ����ͼ�����������
		control_img_->SetBkImage(img);
		// ��ɾ����������
		btn_del_->AttachClick(nbase::Bind(&Item::OnRemove, this, std::placeholders::_1));
	}


	label_title_->SetText(nbase::StringPrintf(L"%s %d%%", title.c_str(), t_time % 100));


}


bool Item::OnRemove(ui::EventArgs* args)
{
	// ɾ��ʱ��ֻ��ɾ�����ݾͿ����ˣ���Ҫɾ�������ϵ�Ԫ��
	return true;
}

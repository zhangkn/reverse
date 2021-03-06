//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextView, UIView, XMServerPostRequest;
@protocol XMMeInfoIntroEditViewControllerDelegate;

@interface XMMeInfoIntroEditViewController : XMBaseViewController <UITextViewDelegate>
{
    UITextView *_textView;
    UILabel *_infoLabel;
    UIView *_backView;
    UIButton *_saveButton;
    _Bool _editAble;
    _Bool _editPlayList;
    NSString *intro;
    XMServerPostRequest *saveRequest;
    long long _customerMaxLength;
    id <XMMeInfoIntroEditViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <XMMeInfoIntroEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long customerMaxLength; // @synthesize customerMaxLength=_customerMaxLength;
@property(nonatomic) _Bool editPlayList; // @synthesize editPlayList=_editPlayList;
@property(nonatomic) _Bool editAble; // @synthesize editAble=_editAble;
@property(retain, nonatomic) XMServerPostRequest *saveRequest; // @synthesize saveRequest;
@property(retain, nonatomic) NSString *intro; // @synthesize intro;
- (void).cxx_destruct;
- (void)onKeyboardWillShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateInfoLabelWithCount:(long long)arg1;
- (void)done;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


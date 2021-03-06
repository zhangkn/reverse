//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class UIButton, UIImageView, WBImageEditorCache;

@interface WBActivityPreviewViewController : WBViewController
{
    WBImageEditorCache *_imageCache;
    UIImageView *_preImageView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *preImageView; // @synthesize preImageView=_preImageView;
@property(retain, nonatomic) WBImageEditorCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)confirmButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)showFaceHint:(_Bool)arg1;
- (id)detectFaceWithImage:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImageEditorCache:(id)arg1;

@end


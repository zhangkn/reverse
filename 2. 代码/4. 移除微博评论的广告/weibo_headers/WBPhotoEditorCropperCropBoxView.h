//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WBPhotoEditorCropperGridLinesView;

@interface WBPhotoEditorCropperCropBoxView : UIView
{
    double _gridLinesAlpha;
    WBPhotoEditorCropperGridLinesView *_gridLinesView;
}

@property(retain, nonatomic) WBPhotoEditorCropperGridLinesView *gridLinesView; // @synthesize gridLinesView=_gridLinesView;
@property(nonatomic) double gridLinesAlpha; // @synthesize gridLinesAlpha=_gridLinesAlpha;
- (void).cxx_destruct;
- (id)createCropCornerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMFeedBackCategoryListModel : XMModel
{
    long long _Id;
    NSString *_name;
    NSArray *_subTypeList;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)xmm_modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *subTypeList; // @synthesize subTypeList=_subTypeList;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long Id; // @synthesize Id=_Id;
- (void).cxx_destruct;

@end


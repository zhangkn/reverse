//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDirectionalGroupMessageViewController.h"

@interface WBMyDirectionalGroupWeiyouForward : WBDirectionalGroupMessageViewController
{
    id _loadingOperationHandle;
    _Bool _needrefreshWhenAppear;
    unsigned long long _groupCount;
}

@property unsigned long long groupCount; // @synthesize groupCount=_groupCount;
- (void).cxx_destruct;
- (void)groupMessageView:(id)arg1 canDeleteGroup:(id)arg2 inRow:(unsigned long long)arg3 withDecesionBlock:(CDUnknownBlockType)arg4;
- (void)searchFromGroups:(id)arg1 withKeyWords:(id)arg2 andCompleteBlock:(CDUnknownBlockType)arg3;
- (void)reloadGroupsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)reloadGroupsFromCacheWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)groupMessageViewWillStartSearching:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStyle:(int)arg1;

@end


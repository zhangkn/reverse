//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTranslucentViewController.h"

#import "PRLMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "WBMCReceiver-Protocol.h"
#import "WBQueueProgressManagerDelegate-Protocol.h"
#import "WBTableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, WBComposeProgressListHeaderView, WBCustomActionSheet, WBTableView;

@interface WBComposeProgressListViewController : WBTranslucentViewController <PRLMTableViewDelegate, UITableViewDataSource, WBTableViewDelegate, WBMCReceiver, WBQueueProgressManagerDelegate>
{
    WBTableView *_tableView;
    NSMutableArray *_source;
    WBComposeProgressListHeaderView *_headerView;
    WBCustomActionSheet *_customActionSheet;
    _Bool _scrolledOnTop;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)enableClickClose;
- (id)panInView;
- (id)scrollView;
- (_Bool)isScrollOnTop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)jobProgress:(id)arg1;
- (void)jobDidFinish:(id)arg1;
- (void)jobStateDidChange:(id)arg1;
- (void)jobDidChange:(id)arg1;
- (void)receveMCMessageWithKey:(id)arg1 event:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_showActionSheetWithModel:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


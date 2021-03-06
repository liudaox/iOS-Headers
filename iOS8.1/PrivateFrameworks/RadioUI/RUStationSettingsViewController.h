//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUAddSeedViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, RUAddSeedViewController, RUMetricsController, RUParallelScrollView, RUStationTuningView, RadioStation, UIAlertView, UIImage, UITableViewCell, UITextField, UIView, _RUStationSettingsTableView;

@interface RUStationSettingsViewController : UIViewController <RUAddSeedViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIImage *_addLikeBanImage;
    RUAddSeedViewController *_addSeedViewController;
    BOOL _addingForLike;
    NSArray *_bannedItems;
    RUParallelScrollView *_containerScrollView;
    UIView *_deleteTintView;
    UIAlertView *_deletionAlertView;
    BOOL _isEditing;
    NSArray *_likedItems;
    RUMetricsController *_metricsController;
    NSMutableArray *_orderedSections;
    NSMutableArray *_queuedMetricsOperations;
    int _sharingRow;
    RadioStation *_station;
    UITableViewCell *_stationNameCell;
    UITextField *_stationNameTextField;
    UITableViewCell *_stationTuningCell;
    RUStationTuningView *_stationTuningView;
    _RUStationSettingsTableView *_tableView;
    int _tuningRow;
}

- (void).cxx_destruct;
- (void)_updateViewForHorizontalSizeClassChangeAllowingTableReload:(BOOL)arg1;
- (void)_updateStationNameTextFieldFrame;
- (void)_updateEditingStateAnimated:(BOOL)arg1;
- (void)_updateLikesAndBans;
- (id)_titleForSettingsSection:(int)arg1;
- (float)_nameTextFieldHeight;
- (id)_nameTextFieldFont;
- (int)_tableViewSectionForSettingsSection:(int)arg1;
- (int)_settingsSectionForTableViewSection:(int)arg1;
- (id)_sectionHeaderTitleLabelFont;
- (float)_sectionHeaderHeight;
- (void)_presentAddSeedController;
- (id)_newPageEvent;
- (id)_newTextField;
- (id)_newShadowViewWithFrame:(struct CGRect)arg1;
- (id)_newSectionHeaderWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (BOOL)_isDeletableRowAtIndexPath:(id)arg1;
- (void)_didSelectLikeBanStation:(id)arg1;
- (int)_countOfSettingsSections;
- (void)_addMetricsControllerOperationBlock:(CDUnknownBlockType)arg1;
- (id)_addLikeBanImage;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_toggleEditAction:(id)arg1;
- (void)_stationNameTextFieldValueDidEndEditingAction:(id)arg1;
- (void)_stationNameTextFieldEditingDidBeginAction:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addSeedViewControllerDidCancel:(id)arg1;
- (void)addSeedViewController:(id)arg1 didSelectStation:(id)arg2;
- (id)contentScrollView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithStation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


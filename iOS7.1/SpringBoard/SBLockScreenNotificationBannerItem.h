//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

#import "SBDefaultBannerViewSource.h"
#import "SBUIQuietModePlayability.h"

@class SBAwayListItem;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability>
{
    SBAwayListItem *_listItem;
    id <SBUnlockActionHandler> _unlockActionHandler;
    id <SBLockScreenNotificationBannerItemDelegate> _delegate;
}

@property(nonatomic) id <SBLockScreenNotificationBannerItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SBUnlockActionHandler> unlockActionHandler; // @synthesize unlockActionHandler=_unlockActionHandler;
@property(readonly, nonatomic) SBAwayListItem *listItem; // @synthesize listItem=_listItem;
- (id)unlockActionContext;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (_Bool)isVIP;
- (id)attachmentImage;
- (id)attachmentText;
- (id)iconImage;
- (id)sourceDate;
- (id)message;
- (id)title;
- (id)sortDate;
- (_Bool)canShowWhileLocked;
- (CDUnknownBlockType)action;
- (void)dealloc;
- (id)initWithListItem:(id)arg1;

@end


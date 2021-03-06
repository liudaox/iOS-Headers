/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel, UINavigationButton;

@interface PLLibraryBannerView : UIView
{
    int _bannerStyle;
    UIImageView *_bannerImageView;
    UILabel *_bannerLabel;
    UINavigationButton *_selectionButton;
    struct CGRect _bannerImageViewInitialFrame;
    NSString *_labelText;
    UIImage *_mainThumbnail;
    BOOL _multipleAssets;
    int _selectionButtonType;
    id _selectionButtonAction;
    id _animationCompletion;
}

@property(copy, nonatomic) id selectionButtonAction; // @synthesize selectionButtonAction=_selectionButtonAction;
@property(nonatomic) int selectionButtonType; // @synthesize selectionButtonType=_selectionButtonType;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(readonly, nonatomic) int bannerStyle; // @synthesize bannerStyle=_bannerStyle;
- (void)layoutSubviews;
- (void)_selectionButtonTapped:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateThumbnailToStackViewCell:(id)arg1 inRootView:(id)arg2 completion:(id)arg3;
- (void)animateThumbnailToCell:(id)arg1 completion:(id)arg2;
- (void)_plainAnimateThumbnailToView:(id)arg1 orCell:(id)arg2 inRootView:(id)arg3 wideJump:(BOOL)arg4 completion:(id)arg5;
- (void)_fancyAnimateThumbnailToCell:(id)arg1 completion:(id)arg2;
- (void)updateDisplayForAssets:(id)arg1;
- (void)dealloc;
- (id)initWithBannerStyle:(int)arg1;

@end


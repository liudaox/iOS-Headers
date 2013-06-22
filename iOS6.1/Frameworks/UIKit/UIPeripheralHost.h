/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIKeyboardSplitTransitionDelegate-Protocol.h"

@class CADisplayLink, NSMutableArray, NSMutableDictionary, NSMutableSet, UIInputViewPostPinningReloadState, UIInputViewSet, UIInputViewTransition, UIKeyboardAutomatic, UIKeyboardRotationState, UIPanGestureRecognizer, UIPeripheralHostState, UIPeripheralHostView, UIResponder, UIView;

@interface UIPeripheralHost : NSObject <UIKeyboardSplitTransitionDelegate, UIGestureRecognizerDelegate>
{
    UIPeripheralHostView *_hostView;
    UIKeyboardAutomatic *_automaticKeyboard;
    BOOL _automaticAppearanceEnabled;
    BOOL _automaticAppearanceEnabledInternal;
    BOOL _automaticKeyboardAnimatingIn;
    BOOL _automaticKeyboardAnimatingOut;
    int _automaticKeyboardState;
    int _ignoringReloadInputViews;
    BOOL _suppresingNotifications;
    BOOL _useHideNotificationsWhenNotVisible;
    BOOL _reloadInputViewsForcedIsAllowed;
    int _nextAutomaticOrderInDirection;
    int _targetRotatedOrientation;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _isUndocked;
    BOOL _splitLockState;
    UIPanGestureRecognizer *_translateRecognizer;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    struct CGAffineTransform _targetTransform;
    struct CGAffineTransform _initialTransform;
    struct CGPoint _velocity;
    NSMutableArray *_dropShadowViews;
    int _shadowStyle;
    BOOL _wasBackgroundSplit;
    struct CGRect _previousShadowFrameLeft;
    struct CGRect _previousShadowFrameRight;
    id _bounceCompletionBlock;
    float m_keyboardAttachedViewHeight;
    struct CGRect _lastKnownIVFrame;
    struct CGRect _lastKnownIAVFrame;
    NSMutableArray *_animationStyleStack;
    BOOL _hasCustomAnimationProperties;
    double _nextAutomaticOrderInDuration;
    double _lastAutomaticKeyboardDuration;
    int _disableAnimationsCount;
    NSMutableArray *_targetStateStack;
    UIInputViewSet *_inputViewSet;
    UIResponder *_responder;
    NSMutableSet *_pinningResponders;
    BOOL _ignoresPinning;
    UIInputViewPostPinningReloadState *_postPinningReloadState;
    BOOL _animationFencingEnabled;
    BOOL _interfaceAutorotationDisabled;
    UIKeyboardRotationState *_rotationState;
    UIInputViewTransition *_currentTransition;
    UIResponder *_selfHostingTrigger;
    NSMutableDictionary *_preservedViewSets;
    BOOL _didFadeInputViews;
    BOOL _blockedReloadInputViewsForDictation;
    BOOL _animateCornerRefresh;
    BOOL _showCorners;
    UIInputViewSet *_transientInputViewSet;
}

+ (void)_releaseSharedInstance;
+ (id)sharedInstance;
+ (struct CGRect)screenBoundsInAppOrientation;
+ (id)passthroughViews;
+ (float)gridViewRubberBandValueForValue:(float)arg1 target:(float)arg2 timeInterval:(float)arg3 velocity:(float *)arg4;
+ (struct CGRect)visiblePeripheralFrame;
@property(nonatomic) int currentState; // @synthesize currentState=_automaticKeyboardState;
@property(retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState; // @synthesize postPinningReloadState=_postPinningReloadState;
@property(retain, nonatomic) UIResponder *selfHostingTrigger; // @synthesize selfHostingTrigger=_selfHostingTrigger;
@property(nonatomic) UIInputViewSet *_transientInputViews; // @synthesize _transientInputViews=_transientInputViewSet;
@property(retain, nonatomic) UIInputViewSet *_inputViews; // @synthesize _inputViews=_inputViewSet;
@property(nonatomic) BOOL animationFencingEnabled; // @synthesize animationFencingEnabled=_animationFencingEnabled;
@property(retain, nonatomic) UIInputViewTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) UIKeyboardRotationState *rotationState; // @synthesize rotationState=_rotationState;
@property(nonatomic) BOOL automaticAppearanceEnabled; // @synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled;
- (void)transitionDidFinish;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)updateFrame:(struct CGRect)arg1 withProgress:(float)arg2 withDuration:(float)arg3 splitHeightDelta:(float)arg4;
- (void)updateFrame:(struct CGRect)arg1 withDuration:(float)arg2 splitHeightDelta:(float)arg3;
- (void)updateFrame:(struct CGRect)arg1 withProgress:(float)arg2 withDuration:(float)arg3;
- (void)setAccessoryViewVisible:(BOOL)arg1 delay:(float)arg2;
- (id)nextAnimationStyle:(BOOL)arg1;
- (id)nextAnimationStyle;
- (void)orderOutWithAnimation:(BOOL)arg1 toDirection:(int)arg2 duration:(double)arg3;
- (void)orderOutWithAnimationStyle:(id)arg1;
- (void)orderInWithAnimationStyle:(id)arg1;
- (void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderOutAutomaticSkippingAnimation;
- (void)orderOutAutomatic;
- (void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderInAutomaticSkippingAnimation;
- (void)orderInAutomatic;
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderOutAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderInAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderOutAutomatic;
- (void)forceOrderInAutomatic;
- (void)layoutIfNeeded;
- (void)layoutInputViews;
- (void)layoutInputViewsForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
@property(readonly, nonatomic) UIKeyboardAutomatic *automaticKeyboard;
- (void)createAutomaticKeyboardIfNeeded;
@property(readonly, nonatomic) BOOL animationsEnabled;
- (void)finishRotationOfKeyboard:(id)arg1;
- (void)rotateKeyboard:(id)arg1 toOrientation:(int)arg2;
- (void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(int)arg2;
- (void)finishRotation;
- (void)rotateToOrientation:(int)arg1;
- (void)prepareForRotationToOrientation:(int)arg1;
- (struct CGRect)_centerStretchRectForWidth:(float)arg1;
- (BOOL)_somePartOfKeyboardIsOnScreen:(id)arg1;
- (void)updateDropShadow;
- (void)showDropShadows:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)translateDetected:(id)arg1;
- (void)handleTranslateDetectedFinished:(id)arg1;
- (void)disableInterfaceAutorotation:(BOOL)arg1;
- (void)_updateBounceAnimation:(id)arg1;
- (void)invalidateDisplayLink;
- (void)bounceAnimationDidFinish;
- (void)finishSplitTransition:(id)arg1;
- (void)prepareForSplitTransition;
- (void)showInputViewsIfNeeded;
- (void)fadeInputViewsIfNeeded;
- (void)fadeInInputViews:(BOOL)arg1;
- (BOOL)isUndocked;
- (void)undock;
- (void)dock;
- (void)refreshCorners;
- (void)_performRefreshCorners;
- (void)showCorners:(BOOL)arg1 withDuration:(float)arg2;
- (void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2;
- (id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2;
- (void)postUndockingNotification;
- (void)postDockingNotification;
- (void)postDidHideNotification;
- (void)postDidShowNotification;
@property(retain, nonatomic) UIPeripheralHostState *targetState;
- (void)manualKeyboardWasOrderedOut:(id)arg1;
- (void)manualKeyboardWillBeOrderedOut:(id)arg1;
- (void)manualKeyboardWasOrderedIn:(id)arg1;
- (void)manualKeyboardWillBeOrderedIn:(id)arg1;
- (BOOL)isOffScreen;
- (BOOL)isOnScreen;
- (void)setKeyboardOnScreenNotifyKey:(BOOL)arg1;
- (id)retain;
- (void)createHostViewIfNeeded;
- (void)initializeTranslateGestureRecognizer;
- (struct CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)peripheralHostDidEnterBackground:(id)arg1;
- (void)peripheralHostWillResume:(id)arg1;
- (void)completeCurrentTransitionIfNeeded;
- (BOOL)hasDictationKeyboard;
- (void)dealloc;
- (id)init;
- (void)setListeningToSpringBoardKeyboardNotifications:(BOOL)arg1;
@property(readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;
- (void)syncToExistingAnimations;
- (void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(BOOL)arg3 forShow:(BOOL)arg4;
- (struct CGRect)screenRectFromBounds:(struct CGRect)arg1 atCenter:(struct CGPoint)arg2 applyingSourceHeightDelta:(float)arg3;
- (BOOL)userInfoContainsActualGeometryChange:(id)arg1;
- (void)logGeometryDescriptionFromUserInfo:(id)arg1;
- (struct UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(int)arg1 outDirection:(int)arg2 forTransition:(int)arg3;
- (struct CGSize)totalPeripheralSizeForOrientation:(int)arg1;
- (void)setPeripheralFrameForHostBounds:(struct CGRect)arg1;
- (void)setPeripheralToolbarFrameForHostWidth:(float)arg1;
- (BOOL)isHostingActiveImpl;
- (BOOL)hasCustomInputView;
- (id)containerWindow;
- (id)responderForCurrentAccessoryView;
- (void)updateInputAccessoryViewVisibility:(BOOL)arg1 withDuration:(float)arg2;
- (void)candidateBarWillChangeHeight:(float)arg1 withDuration:(float)arg2;
- (BOOL)isSplitting;
- (BOOL)isTranslating;
- (void)_endDisablingAnimations;
- (void)_beginDisablingAnimations;
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1;
- (BOOL)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2;
- (BOOL)_isSelfHosting;
- (void)_clearPreservedInputViewsWithId:(id)arg1;
- (BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL keyClicksEnabled;
- (BOOL)_isSuppressedByManualKeyboard;
- (id)_inputViewsForResponder:(id)arg1;
- (struct CGRect)localDisplayRectForViewSet:(id)arg1;
- (struct CGRect)localDisplayRectForViewSet:(id)arg1 position:(int)arg2;
- (struct CGRect)displayRectForViewSet:(id)arg1 orientation:(int)arg2 position:(int)arg3 fromRotation:(BOOL)arg4;
- (id)_currentInputView;
@property(retain, nonatomic) UIInputViewSet *inputViews;
- (void)setInputViews:(id)arg1 animated:(BOOL)arg2;
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;
- (id)computeTransitionFromInputViews:(id)arg1 toInputViews:(id)arg2 animationStyle:(id)arg3;
- (id)computeTransitionForInputViews:(id)arg1 fromOrientation:(int)arg2 toOrientation:(int)arg3;
- (void)executeTransition:(id)arg1;
- (void)adjustAccessoryViewForSubsumedTransition:(id)arg1;
- (void)adjustHostViewForTransitionCompletion:(id)arg1;
- (void)adjustHostViewForTransitionEndFrame:(id)arg1;
- (void)adjustHostViewForTransitionStartFrame:(id)arg1;
@property(readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
- (void)implBoundsHeightChangeDoneForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)peripheralViewMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)maximizeWithAnimation:(BOOL)arg1;
- (BOOL)maximize;
- (BOOL)minimize;
- (void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;
- (BOOL)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)resetNextAutomaticOrderInDirectionAndDuration;
- (void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (void)setkeyboardAttachedViewHeight:(float)arg1;
- (float)keyboardAttachedViewHeight;
- (double)getLastAutomaticDuration;
- (void)resetCurrentOrderOutAnimationDuration:(double)arg1;
- (float)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;
- (struct CGPoint)offHostPointForPoint:(struct CGPoint)arg1;
- (struct CGRect)_inputViewRectToAvoid;
- (int)_clipCornersOfView:(id)arg1;
- (void)moveToPersistentOffset;
- (void)setUndockedWithOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (struct CGPoint)adjustedPersistentOffset;
- (float)minimumOffsetForBuffer:(float)arg1;
- (struct CGRect)visiblePeripheralFrame:(BOOL)arg1;
@property(readonly, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;
- (void)_endIgnoringReloadInputViews;
- (void)_beginIgnoringReloadInputViews;
@property(nonatomic) BOOL automaticAppearanceInternalEnabled;
@property(readonly, nonatomic) NSMutableArray *dropShadowViews;
@property(readonly, nonatomic) UIView *view;
- (BOOL)_isTrackingResponder:(id)arg1;
@property(nonatomic) BOOL ignoresPinning;
- (void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2;
- (BOOL)_hasPostPinningReloadState;
- (BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_clearPinningResponders;
- (void)_reloadInputViewsForResponder:(id)arg1;
- (void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1;
- (void)prepareForPinning;
- (BOOL)pinningPreventsInputViews:(id)arg1;

@end

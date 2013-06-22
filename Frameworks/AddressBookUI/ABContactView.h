/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableView.h"

@class CNContact, NSDictionary, UIColor, UIView;

@interface ABContactView : UITableView
{
    UIView *_customHeaderView;
    CNContact *_contact;
    UIColor *_backgroundColor;
    UIColor *_selectedCellBackgroundColor;
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    NSDictionary *_actionTextAttributes;
    struct UIEdgeInsets _contentMargins;
}

+ (BOOL)isFixedValueProperty:(id)arg1;
+ (BOOL)isMultiValueProperty:(id)arg1;
+ (id)optionalCardProperties;
+ (id)defaultCardProperties;
+ (id)allCardProperties;
+ (id)requiredNameProperties;
+ (id)nameProperties;
+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForProperty:(id)arg1;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForGroupSpacer;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForSplitActions;
+ (id)cellIdentifierForActions;
@property(nonatomic) struct UIEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
@property(copy, nonatomic) NSDictionary *actionTextAttributes; // @synthesize actionTextAttributes=_actionTextAttributes;
@property(copy, nonatomic) NSDictionary *valueTextAttributes; // @synthesize valueTextAttributes=_valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(retain, nonatomic) UIColor *selectedCellBackgroundColor; // @synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
- (void)applyCellAppearance:(id)arg1;
- (void)updateFontSizes;
- (void)tintColorDidChange;
- (void)registerPropertyCellClass:(Class)arg1;
- (void)setTableHeaderView:(id)arg1;
- (id)defaultHeaderView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 contact:(id)arg3;

// Remaining properties
@property(nonatomic) id <ABContactViewDataSource> dataSource;
@property(nonatomic) id <ABContactViewDelegate> delegate;
@property(retain, nonatomic) UIColor *separatorColor;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSISEngine, NSISLinearExpression, NSLayoutConstraint, NSString;

@protocol NSLayoutItem <NSObject>
- (BOOL)nsli_isFlipped;
- (unsigned int)nsli_autoresizingMask;
- (BOOL)nsli_descriptionIncludesPointer;
- (NSString *)nsli_description;
- (BOOL)nsli_resolvedValue:(float *)arg1 forSymbolicConstant:(NSString *)arg2 inConstraint:(NSLayoutConstraint *)arg3 error:(id *)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(float)arg3 container:(id <NSLayoutItem>)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(float)arg3 forConstraint:(NSLayoutConstraint *)arg4;
- (id <NSLayoutItem>)nsli_superitem;
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;
- (NSISEngine *)nsli_layoutEngine;
@end

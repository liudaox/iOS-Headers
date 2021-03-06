//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLPEModel, NSDictionary, NSMutableDictionary;

@interface BLPhotoEffectsModel : NSObject
{
    int _effectGroupIndex;
    float _effectValue;
    BOOL _hasAdjustments;
    NSMutableDictionary *_adjustments;
    NSDictionary *_analysis;
    BLPEModel *_model;
}

- (id)ciImageWithPhotoEffectsForCIImage:(id)arg1 inDestRect:(struct CGRect)arg2 withPadding:(float)arg3;
- (id)ciImageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(struct CGRect)arg2 withPadding:(float)arg3;
- (id)imageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(struct CGRect)arg2 withPadding:(float)arg3;
- (id)imageWithPhotoEffectsForImage:(id)arg1 inDestRect:(struct CGRect)arg2 withPadding:(float)arg3;
- (float)paddingForSize:(struct CGSize)arg1;
- (BOOL)hasFastDownstreamEffects;
- (BOOL)canRenderCI;
- (BOOL)hasEdgeEffects;
- (BOOL)needsPadding;
- (BOOL)hasInkEffects;
- (BOOL)hasPhotoEffects;
- (void)dealloc;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ignoreEdgeEffects:(BOOL)arg3;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;

@end


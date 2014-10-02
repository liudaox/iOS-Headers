//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLStrokePolygonProgram.h>

__attribute__((visibility("hidden")))
@interface VGLFlatBuildingStrokeProgram : VGLStrokePolygonProgram
{
    int _uMaxLayeringHeight;
    float _maxLayeringHeight;
    int _uLayeringHeightScale;
    float _layeringHeightScale;
    int _uLayeringHeightOffset;
    float _layeringHeightOffset;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float layeringHeightOffset; // @synthesize layeringHeightOffset=_layeringHeightOffset;
@property(nonatomic) float layeringHeightScale; // @synthesize layeringHeightScale=_layeringHeightScale;
@property(nonatomic) float maxLayeringHeight; // @synthesize maxLayeringHeight=_maxLayeringHeight;
- (void)setup;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVPlayerTimelyCaller.h>

@class NSArray;

@interface AVPlayerOccasionalCaller : AVPlayerTimelyCaller
{
    NSArray *_times;
    CDUnknownBlockType _block;
}

- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (CDStruct_1b6d18a9)_nextFiringTimeAfterTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_previousFiringTimeBeforeTime:(CDStruct_1b6d18a9)arg1;
- (void)_effectiveRateChanged;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 times:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end


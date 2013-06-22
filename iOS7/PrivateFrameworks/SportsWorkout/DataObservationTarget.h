/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsWorkout/ObservationTarget.h>

@class NSDecimalNumber, NSString;

@interface DataObservationTarget : ObservationTarget
{
    NSDecimalNumber *_value;
    NSDecimalNumber *_repeatInterval;
    NSString *_distanceUnits;
}

+ (id)targetWithValue:(id)arg1 repeatInterval:(id)arg2 selector:(SEL)arg3 distanceUnits:(id)arg4;
@property(retain, nonatomic) NSString *distanceUnits; // @synthesize distanceUnits=_distanceUnits;
@property(retain, nonatomic) NSDecimalNumber *repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(retain, nonatomic) NSDecimalNumber *value; // @synthesize value=_value;
- (id)description;
- (void)dealloc;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOGeocodeRequest;

@interface RTGeocoder : NSObject
{
    GEOGeocodeRequest *_geocodeRequest;
}

@property(retain, nonatomic) GEOGeocodeRequest *geocodeRequest; // @synthesize geocodeRequest=_geocodeRequest;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)_cancelRequest:(id)arg1;
- (id)geocodeLatitude:(double)arg1 longitude:(double)arg2;
- (void)geocodeLatitude:(double)arg1 longitude:(double)arg2 handler:(id)arg3;

@end


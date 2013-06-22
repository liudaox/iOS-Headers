/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSArray, NSLocale, NSString;

@interface SASPronunciationData : AceObject <SAAceSerializable>
{
}

+ (id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationData;
@property(copy, nonatomic) NSString *ttsVersion;
@property(copy, nonatomic) NSArray *ttsPronunciations;
@property(copy, nonatomic) NSString *orthography;
@property(copy, nonatomic) NSLocale *language;
@property(copy, nonatomic) NSString *asrPronunciationData;
@property(copy, nonatomic) NSString *apgId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

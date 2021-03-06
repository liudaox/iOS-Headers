/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject
{
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

- (id)initWithWorkbook:(id)arg1;
- (void)dealloc;
- (void)addProcessorClass:(Class)arg1;
- (_Bool)hasProcessors;
- (void)removeProcessorClass:(Class)arg1;
- (void)removeAllObjects;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (void)applyProcessorsWithSheet:(id)arg1;

@end


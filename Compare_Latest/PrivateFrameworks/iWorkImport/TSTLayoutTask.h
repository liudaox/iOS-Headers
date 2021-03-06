//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, TSTMasterLayout;

__attribute__((visibility("hidden")))
@interface TSTLayoutTask : NSObject <NSCopying>
{
    TSTMasterLayout *mMasterLayout;
    NSMutableArray *mCellStatesToLayout;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeToMasterLayoutCaches;
- (void)enumerateCellStatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)addCellState:(id)arg1;
@property(readonly, nonatomic) unsigned int numberOfCellStates;
- (void)dealloc;
- (id)initWithLayoutTask:(id)arg1;
- (id)initWithMasterLayout:(id)arg1;

@end


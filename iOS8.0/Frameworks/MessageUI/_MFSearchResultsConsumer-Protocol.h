//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableSet;

@protocol _MFSearchResultsConsumer <NSObject>
- (void)_appendSortedResultsOfType:(unsigned int)arg1 excluding:(NSMutableSet *)arg2 toResults:(NSMutableArray *)arg3;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(void (^)(unsigned int))arg1;
- (BOOL)_didFinishSearchForType:(unsigned int)arg1;
- (BOOL)_shouldProcessResultsAfterFinishingType:(unsigned int)arg1;
- (void)_addResults:(NSArray *)arg1 ofType:(unsigned int)arg2;
- (BOOL)_isResetting;
@end

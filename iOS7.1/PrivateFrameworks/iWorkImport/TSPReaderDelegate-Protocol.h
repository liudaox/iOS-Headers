//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TSPData, TSPLazyReference, TSPObject, TSPObjectContext, TSPReader;

@protocol TSPReaderDelegate <NSObject>
@property(readonly, nonatomic) BOOL isReadingFromDocument;
- (void)reader:(TSPReader *)arg1 didReadLazyReference:(TSPLazyReference *)arg2;
- (void)reader:(TSPReader *)arg1 didFindExternalRepeatedReference:(NSArray *)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(TSPObject *)arg5 completion:(void (^)(id))arg6;
- (void)reader:(TSPReader *)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(TSPObject *)arg6 completion:(void (^)(id))arg7;
- (TSPData *)reader:(TSPReader *)arg1 wantsDataForIdentifier:(long long)arg2;
- (id <TSPLazyReferenceDelegate>)lazyReferenceDelegateForReader:(TSPReader *)arg1;
- (id <TSPObjectDelegate>)objectDelegateForReader:(TSPReader *)arg1;
- (TSPObjectContext *)contextForReader:(TSPReader *)arg1;

@optional
@property(readonly, nonatomic) BOOL isCrossAppPaste;
@property(readonly, nonatomic) BOOL isCrossDocumentPaste;
@property(readonly, nonatomic) BOOL isFromPasteboard;
- (void)reader:(TSPReader *)arg1 didUnarchiveObject:(TSPObject *)arg2;
- (void)reader:(TSPReader *)arg1 didResetObjectIdentifierForObject:(TSPObject *)arg2 originalObjectIdentifier:(long long)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/PFUbiquityBaselineOperation.h>

@class NSObject<PFUbiquityBaselineRecoveryOperationDelegate>;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation
{
}

- (void)main;
- (BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id *)arg2;
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1;
- (BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id *)arg2;
- (BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id *)arg3;
- (id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id *)arg2;
- (BOOL)conflictsExistForBaseline:(id)arg1;
- (BOOL)hasCurrentBaseline;
- (BOOL)isEqual:(id)arg1;
- (id)retainedDelegate;
@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPImageCacheRequest, NSError, UIImage;

@protocol MPImageRequestDelegate <NSObject>

@optional
- (void)imageRequest:(MPImageCacheRequest *)arg1 loadedImage:(UIImage *)arg2;
- (void)imageRequest:(MPImageCacheRequest *)arg1 failedWithError:(NSError *)arg2;
@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class PDSlideBase;

@interface PMSlideMapper : CMMapper
{
    PDSlideBase *mSlide;
    struct CGRect mRect;
}

- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect)arg2 parent:(id)arg3;
- (id)slideName;
- (id)defaultTheme;
- (id)styleMatrix;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)slideRect;

@end


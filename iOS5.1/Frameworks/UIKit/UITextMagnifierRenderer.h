/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UITextMagnifierRenderer : UIView
{
    int m_autoscrollDirections;
    int m_magnifierMethod;
}

@property(nonatomic) int magnifierMethod; // @synthesize magnifierMethod=m_magnifierMethod;
@property(nonatomic) int autoscrollDirections; // @synthesize autoscrollDirections=m_autoscrollDirections;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawMagnifier:(struct CGRect)arg1;
- (void)drawAutoscroller:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


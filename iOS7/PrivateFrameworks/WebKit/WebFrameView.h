/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WAKView.h"

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView
{
    WebFrameViewPrivate *_private;
}

- (void)printDocumentView;
- (_Bool)documentViewShouldHandlePrint;
- (id)_webcore_effectiveFirstResponder;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_forwardMouseEvent:(id)arg1;
- (_Bool)_firstResponderIsFormControl;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (_Bool)_scrollLineHorizontally:(_Bool)arg1;
- (_Bool)_scrollLineVertically:(_Bool)arg1;
- (_Bool)_pageInBlockProgressionDirection:(_Bool)arg1;
- (_Bool)_pageHorizontally:(_Bool)arg1;
- (_Bool)_pageVertically:(_Bool)arg1;
- (float)_horizontalPageScrollDistance;
- (float)_horizontalKeyboardScrollDistance;
- (_Bool)_scrollHorizontallyBy:(float)arg1;
- (_Bool)_scrollVerticallyBy:(float)arg1;
- (void)_goForward;
- (void)_goBack;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (_Bool)_scrollToEndOfDocument;
- (_Bool)_scrollToBeginningOfDocument;
- (_Bool)_isFlippedDocument;
- (_Bool)_isVerticalDocument;
- (_Bool)_scrollOverflowInDirection:(int)arg1 granularity:(int)arg2;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)visibleRect;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isOpaque;
- (void)setNextKeyView:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)acceptsFirstResponder;
- (id)documentView;
- (_Bool)allowsScrolling;
- (void)setAllowsScrolling:(_Bool)arg1;
- (id)webFrame;
- (_Bool)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


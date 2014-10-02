//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKMessageEntryTextView.h>

#import "NSTextStorageDelegate.h"

@class NSArray, NSMutableDictionary;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate>
{
    BOOL _balloonColor;
    NSMutableDictionary *_mediaObjects;
    NSMutableDictionary *_composeImages;
    NSArray *_pasteboardValues;
}

@property(retain, nonatomic) NSArray *pasteboardValues; // @synthesize pasteboardValues=_pasteboardValues;
@property(retain, nonatomic) NSMutableDictionary *composeImages; // @synthesize composeImages=_composeImages;
@property(retain, nonatomic) NSMutableDictionary *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(nonatomic) BOOL balloonColor; // @synthesize balloonColor=_balloonColor;
- (id)pasteboardTextForPasteboardValues:(id)arg1;
- (id)composeImageForTransferGUID:(id)arg1;
- (void)previewDidChange:(id)arg1;
- (void)updateComposeImages;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned int)arg2 range:(struct _NSRange)arg3 changeInLength:(int)arg4;
- (id)compositionText;
- (void)setCompositionText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;

@end

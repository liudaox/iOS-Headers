/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSValue;

@interface TIMecabraCandidate : TIKeyboardCandidate
{
    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    NSString *_candidate;
    NSString *_input;
    NSValue *_mecabraCandidatePointerValue;
}

+ (int)type;
+ (BOOL)supportsSecureCoding;
- (BOOL)isForShortcutConversion;
- (BOOL)isExtensionCandidate;
- (BOOL)isEmojiCandidate;
@property(retain, nonatomic) NSValue *mecabraCandidatePointerValue; // @synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue;
- (id)input;
- (id)candidate;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(BOOL)arg4 isEmoji:(BOOL)arg5 isShortcut:(BOOL)arg6;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;

@end

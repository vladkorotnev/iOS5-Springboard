/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AFUIUtteranceViewDelegate <NSObject>

@optional
- (BOOL)utteranceViewTextShouldPreventCorrection:(id)arg1;
- (void)utteranceViewTextWillBeginCorrecting:(id)arg1;
- (void)utteranceViewTextDidChange:(id)arg1;
- (void)utteranceViewTextDidFinishCorrecting:(id)arg1;
- (void)utteranceViewInfoButtonHit:(id)arg1;
@end


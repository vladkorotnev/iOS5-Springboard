/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AFUISystemSnippetController.h"

@class AFUIUtteranceView, NSString, SBAssistantInitialQueryInstructionsController;

@interface SBAssistantInitialQueryController : AFUISystemSnippetController
{
    NSString *_text;
    SBAssistantInitialQueryInstructionsController *_helpController;
    AFUIUtteranceView *_view;
}

- (void)dealloc;
- (id)view;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

@end


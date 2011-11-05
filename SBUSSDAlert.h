/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlert.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert
{
    unsigned int _receivedString:1;
    unsigned int _dismissOnActivate:1;
    NSTimer *_delayedDismissTimer;
}

+ (void)registerForSettingsAlerts;
+ (void)registerForAlerts;
+ (void)test;
+ (id)errorStringForCode:(id)arg1;
+ (void)_daemonRestart:(id)arg1;
+ (void)_newSIM:(id)arg1;
- (void)dealloc;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)USSDStringAvailable:(id)arg1 allowsResponse:(BOOL)arg2;
- (BOOL)allowsResponse;
- (BOOL)receivedString;
- (void)setDismissOnActivate:(BOOL)arg1;
- (void)_delayedDismiss;
- (void)activate;
- (void)deactivate;

@end


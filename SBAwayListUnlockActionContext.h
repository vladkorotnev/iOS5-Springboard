/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBAwayListUnlockActionContext : NSObject
{
    NSString *_lockLabel;
    NSString *_shortLockLabel;
    id _unlockAction;
    NSString *_bulletinID;
    float _fontsize;
    BOOL _launchActionCanBypassPinLock;
    BOOL _canBypassPinLock;
}

+ (id)unlockActionContextForBulletin:(id)arg1;
+ (id)unlockActionContextForAlertItem:(id)arg1;
- (id)_initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 unlockAction:(id)arg3 bulletinID:(void)arg4;
- (id)_initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 unlockAction:(id)arg3 bulletinID:(void)arg4 fontSize:(id)arg5;
- (void)dealloc;
- (id)unlockAction;
- (id)lockLabel;
- (id)shortLockLabel;
- (id)bulletinID;
- (float)lockLabelFontSize;
@property(nonatomic) BOOL canBypassPinLock; // @synthesize canBypassPinLock=_canBypassPinLock;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBHUDView.h"

@interface SBVolumeHUDView : SBHUDView
{
    int _mode;
    BOOL _headphonesPresent;
}

- (void)_updateImage;
- (void)_updateLabels;
- (id)init;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL headphonesPresent; // @synthesize headphonesPresent=_headphonesPresent;
- (void)setProgress:(float)arg1;

@end


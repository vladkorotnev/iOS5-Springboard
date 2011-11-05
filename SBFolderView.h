/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UITextFieldDelegate-Protocol.h"

@class SBFolder, SBFolderIconListView, SBFolderTextField, UIImageView, UILabel;

@interface SBFolderView : UIView <UITextFieldDelegate>
{
    SBFolder *_folder;
    UILabel *_label;
    SBFolderTextField *_textField;
    SBFolderIconListView *_iconListView;
    UIView *_backgroundView;
    BOOL _isEditing;
    UIImageView *_shadows[12];
    unsigned int _rows;
    CDStruct_d18cc6b1 _notchInfo;
    int _orientation;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupNavigationBar;
- (void)_setupBackgroundView;
- (void)_setupFolderTitleLabel;
- (struct CGSize)_sizeForCurrentConfiguration;
- (void)prepareToSetOrientation:(int)arg1;
- (void)setRows:(unsigned int)arg1 notchInfo:(CDStruct_d18cc6b1)arg2 orientation:(int)arg3;
- (void)cleanUpAfterOrientationChange;
- (void)prepareToDropIconView:(id)arg1 targetFolderBounds:(struct CGRect *)arg2;
- (void)didDropIconView;
- (unsigned int)rows;
- (Class)notchViewClass;
- (struct CGRect)rectForNotchLinen;
- (void)_createInitialIconViews;
- (void)setIconListView:(id)arg1;
- (void)noteHasGrabbedIcon:(id)arg1;
- (void)noteGrabbedIconLocation:(struct CGPoint)arg1;
- (BOOL)isScrolling;
- (id)scrollOffset;
- (void)setScrollOffset:(id)arg1;
- (void)_placeIconListView;
- (id)iconListView;
- (void)dealloc;
- (void)setFolder:(id)arg1;
- (float)_labelHorizontalInset;
- (float)_labelVerticalInset;
- (void)setFolderName:(id)arg1;
- (void)_placeLabelAndTextField;
- (void)_placeBackgroundView;
- (void)_placeBars;
- (BOOL)canEditTitle;
- (void)setIsEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)enableShiftForFolderTextFieldAfterBeginEditing;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (struct _NSRange)textField:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (id)editTitleField;
- (id)_shadowForPosition:(int)arg1;
- (void)_placeShadow:(int)arg1;
- (void)_placeShadows;

@end


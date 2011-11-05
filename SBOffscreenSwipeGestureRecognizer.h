/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBPanGestureRecognizer.h"

@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer
{
    int m_offscreenEdge;
    float m_edgeMargin;
    float m_falseEdge;
    int m_touchesChecked;
    struct CGPoint m_firstTouch;
    float m_edgeCenter;
    float m_allowableDistanceFromEdgeCenter;
    BOOL m_requiresSecondTouchInRange;
}

- (id)initForOffscreenEdge:(int)arg1;
- (void)reset;
@property(nonatomic) float edgeMargin; // @synthesize edgeMargin=m_edgeMargin;
@property(nonatomic) float falseEdge; // @synthesize falseEdge=m_falseEdge;
- (BOOL)firstTouchInRange:(struct CGPoint)arg1;
- (BOOL)secondTouchInRange:(struct CGPoint)arg1;
- (void)_updateAnimationDistanceAndEdgeCenter;
- (void)updateForBeganOrMovedTouches:(struct __SBGestureContext *)arg1;
@property(nonatomic) float edgeCenter; // @synthesize edgeCenter=m_edgeCenter;
@property(nonatomic) BOOL requiresSecondTouchInRange; // @synthesize requiresSecondTouchInRange=m_requiresSecondTouchInRange;
@property(nonatomic) float allowableDistanceFromEdgeCenter; // @synthesize allowableDistanceFromEdgeCenter=m_allowableDistanceFromEdgeCenter;

@end


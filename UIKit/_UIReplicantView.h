/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIScreen, _UIReplicantContentView, _UISlotIdWrapper;



__attribute__((visibility("hidden")))

@interface _UIReplicantView : UIView

{

    _UISlotIdWrapper *_slotIdWrapper;

    UIScreen *_screen;

    struct CGSize _snapshotSize;

    _UIReplicantContentView *_contentView;

}



+ (id)_pendingSnapshotOfTarget:(id)arg1 snapshotBlock:(id)arg2;

+ (Class)layerClass;

+ (id)snapshotContext;

+ (id)snapshotWindows:(id)arg1 withRect:(struct CGRect)arg2;

+ (id)snapshotWithScreen:(id)arg1 defer:(_Bool)arg2;

+ (id)snapshotWithView:(id)arg1 fromRect:(struct CGRect)arg2 capInsets:(struct UIEdgeInsets)arg3 defer:(_Bool)arg4;

- (struct CGAffineTransform)_appliedTransform;

- (id)_copyResizableSnapshotViewFromRect:(struct CGRect)arg1 withCapInsets:(struct UIEdgeInsets)arg2;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setBounds:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface VKLabelMarker : NSObject

{

    shared_ptr_dd1f7020 _manager;

    shared_ptr_0c41964b _label;

    float _contentScale;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (CDStruct_d2b197d1)bounds;

- (unsigned long long)businessID;

- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;

- (struct CGRect)calloutAnchorRect;

- (CDStruct_c3b9c2ee)coordinate;

- (void)dealloc;

- (id)debugAnchorPointString;

- (id)featureHandles;

- (_Bool)hasBusinessID;

- (id)iconName;

- (id)incident;

- (shared_ptr_0c41964b)infoLabel;

- (id)initWithManager:(const shared_ptr_dd1f7020 *)arg1 infoLabel:(const shared_ptr_0c41964b *)arg2 contentScale:(float)arg3;

- (_Bool)isOneWayArrow;

- (_Bool)isSelectable;

- (_Bool)isTrafficIncident;

- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;

- (void)setLabelSelected:(_Bool)arg1;

- (id)subtitle;

- (id)title;



@end



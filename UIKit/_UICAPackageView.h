/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class CAPackage, NSMutableArray;



@interface _UICAPackageView : UIView

{

    CAPackage *_package;

    NSMutableArray *_rootViews;

}



- (void)dealloc;

- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;

- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;

- (id)publishedObjectWithName:(id)arg1;

- (id)publishedViewWithName:(id)arg1;



@end



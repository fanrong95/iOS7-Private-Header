/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class NSString, SUScriptCanvasContext, UIImage;



@interface SUScriptSegmentedControlItem : SUScriptObject

{

    SUScriptCanvasContext *_canvas;

    NSString *_identifier;

    UIImage *_image;

    NSString *_imageURLString;

    NSString *_title;

    id _userInfo;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;

- (void)_reloadUserInterface;

- (id)_segmentedControl;

- (void)_setImage:(id)arg1;

- (id)attributeKeys;

@property(retain) SUScriptCanvasContext *canvas;

- (void)dealloc;

@property(retain) NSString *identifier;

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;

@property(retain) NSString *imageURL;

- (id)initWithPageSection:(id)arg1;

- (id)newPageSection;

- (id)scriptAttributeKeys;

@property(retain) NSString *title;

@property(retain) id userInfo;



@end



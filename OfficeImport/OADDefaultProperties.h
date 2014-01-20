/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class OADShapeProperties, OADTextBodyProperties, OADTextListStyle;



__attribute__((visibility("hidden")))

@interface OADDefaultProperties : NSObject

{

    OADShapeProperties *mShapeProperties;

    OADTextBodyProperties *mTextBodyProperties;

    OADTextListStyle *mTextListStyle;

}



- (void)dealloc;

- (id)init;

- (id)initWithDefaults;

- (void)setShapeProperties:(id)arg1;

- (void)setTextBodyProperties:(id)arg1;

- (void)setTextListStyle:(id)arg1;

- (id)shapeProperties;

- (id)textBodyProperties;

- (id)textListStyle;



@end



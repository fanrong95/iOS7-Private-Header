/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString, NSURL, UIColor, UIImage;



@interface SKUIGiftTheme : NSObject <NSCopying>

{

    UIColor *_backgroundColor;

    UIColor *_bodyTextColor;

    UIImage *_headerImage;

    NSURL *_headerImageURL;

    UIColor *_primaryTextColor;

    long long _themeIdentifier;

    NSString *_themeName;

}



- (void).cxx_destruct;

@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

@property(copy, nonatomic) UIColor *bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;

@property(copy, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;

- (id)initWithThemeDictionary:(id)arg1;

@property(copy, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;

@property(nonatomic) long long themeIdentifier; // @synthesize themeIdentifier=_themeIdentifier;

@property(copy, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;



@end



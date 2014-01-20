/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSError, NSHTTPURLResponse, NSString;



@interface AAResponse : NSObject

{

    NSDictionary *_responseDictionary;

    NSHTTPURLResponse *_httpResponse;

    NSError *_error;

}



- (void).cxx_destruct;

- (id)_deviceSpecificLocalizedString:(id)arg1;

- (void)_parsePlistResponse:(id)arg1;

- (id)_stringWithDescriptionForResponseError:(id)arg1;

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(_Bool)arg3;

@property(readonly, nonatomic) NSString *protocolVersion;

@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;



@end



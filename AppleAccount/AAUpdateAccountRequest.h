/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AARequest.h"


@class ACAccount;



@interface AAUpdateAccountRequest : AARequest

{

    ACAccount *_account;

}



- (void).cxx_destruct;

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;

- (id)initWithAccount:(id)arg1;

- (id)initWithURLString:(id)arg1 account:(id)arg2;

- (id)urlRequest;

- (id)urlString;



@end



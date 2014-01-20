/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CertInfoTrustDescription.h"



@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>

{

    struct __SecTrust *_trust;

    int _action;

}



- (id)_expirationDate;

- (unsigned long long)certificateCount;

- (id)certificateExpirationDateAtIndex:(unsigned long long)arg1;

- (id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;

- (id)certificatePropertiesAtIndex:(unsigned long long)arg1;

- (id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;

- (void)dealloc;

- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2;

- (_Bool)isTrusted;

- (id)summaryDescriptionItems;

- (id)summarySubtitle;

- (id)summaryTitle;



@end



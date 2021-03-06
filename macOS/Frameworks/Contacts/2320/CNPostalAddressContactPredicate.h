//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDContactPredicate-Protocol.h>

@class CNPostalAddress, NSString;

__attribute__((visibility("hidden")))
@interface CNPostalAddressContactPredicate : CNPredicate <CNCDContactPredicate>
{
    CNPostalAddress *_postalAddress;
}

+ (BOOL)supportsSecureCoding;
+ (id)predicateForKey:(id)arg1 value:(id)arg2;
+ (id)predicatesForISOCountryCode:(id)arg1;
+ (id)predicatesForCountry:(id)arg1;
+ (id)predicatesForPostalCode:(id)arg1;
+ (id)predicatesForState:(id)arg1;
+ (id)predicatesForSubAdministrativeArea:(id)arg1;
+ (id)predicatesForCity:(id)arg1;
+ (id)predicatesForSubLocality:(id)arg1;
+ (id)predicatesForStreet:(id)arg1;
@property(readonly, copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPostalAddress:(id)arg1;
- (id)cn_coreDataPredicate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


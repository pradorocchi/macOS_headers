//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsPersistence/ABCDOwnedObject.h>

@class ABCDService, NSArray, NSString;

@interface ABCDMessagingAddress : ABCDOwnedObject
{
}

+ (id)keyPathsForValuesAffectingBundleIdentifiers;
@property(copy, nonatomic) NSArray *bundleIdentifiers;
@property(retain, nonatomic) NSString *associatedServiceName;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(copy) NSString *bundleIdentifiersString; // @dynamic bundleIdentifiersString;
@property(retain, nonatomic) ABCDService *service; // @dynamic service;
@property(copy, nonatomic) NSString *teamIdentifier; // @dynamic teamIdentifier;
@property(retain, nonatomic) NSString *userIdentifier; // @dynamic userIdentifier;

@end


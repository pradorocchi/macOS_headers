//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIConfigureEnterpriseSettingsElement : OSIInstallQueueElement
{
}

- (double)estimatedTimeToComplete;
- (id)operationName;
- (void)addTeamIDs:(id)arg1;
- (void)toggleSKEL:(BOOL)arg1;
- (void)toggleSIP:(BOOL)arg1;
- (BOOL)runReturningError:(id *)arg1;

@end


//
//  IPAddress.h
//  IPAddress
//
//  Created by Fiona on 14-2-20.
//  Copyright (c) 2014年 mophie, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IPAddress : NSObject

#define MAXADDRS    32

extern char *if_names[MAXADDRS];
extern char *ip_names[MAXADDRS];
extern char *hw_addrs[MAXADDRS];
extern unsigned long ip_addrs[MAXADDRS];

///

void InitAddresses();
void FreeAddresses();
void GetIPAddresses();
void GetHWAddresses();

@end

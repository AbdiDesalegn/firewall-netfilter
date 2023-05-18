#ifndef FIREWALL_NETFILTER_H
#define FIREWALL_NETFILTER_H
#include <stdint.h>
#include <linux/netfilter.h>
#include <libnetfilter_queue/libnetfilter_queue.h>

// Function to initialize the firewall and register Netfilter hooks
void initialize_firewall();

// Function to cleanup and unregister Netfilter hooks
void cleanup_firewall();

// Netfilter callback function for packet processing
int process_packet(struct nfq_q_handle *qh, struct nfgenmsg *nfmsg, struct nfq_data *nfa);

#endif /* FIREWALL_NETFILTER_H */

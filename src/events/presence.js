const { Events } = require('discord.js');
const { Client, GatewayIntentBits, ActivityType } = require('discord.js');

module.exports = {
    name: Events.ClientReady,
    once: false,
    async execute(client) {
        client.user.setPresence({
            activities: [{ name: `/help | @regales`, type: ActivityType.Listening }],
            status: 'online',
        });
    },
};
//Search:

	memset(&m_tvLastSyncTime, 0, sizeof(m_tvLastSyncTime));

//Add above:

#ifdef ENABLE_GUILD_STATISTICS_SYSTEM
	m_dwLonIstLastTime = 0;
#endif